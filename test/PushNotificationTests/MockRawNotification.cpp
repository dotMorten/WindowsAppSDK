﻿#include "pch.h"
#include "MockRawNotification.h"

winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, winrt::hstring> MockRawNotification::Headers()
{
    return winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, winrt::hstring>{};
}

winrt::hstring MockRawNotification::ChannelId()
{
    return winrt::hstring(L"SampleChannelId");
}

winrt::hstring MockRawNotification::Content()
{
    return winrt::hstring(c_rawNotificationPayload);
}

winrt::Windows::Storage::Streams::IBuffer MockRawNotification::ContentBytes()
{
    winrt::Windows::Storage::Streams::DataWriter dataWriter{};
    dataWriter.WriteString(c_rawNotificationPayload);
    return dataWriter.DetachBuffer();
}