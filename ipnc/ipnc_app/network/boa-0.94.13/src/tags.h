/*
 * Header file to generate xml tags 
 *
 */

#ifndef __PSIA_TAGS_H__
#define __PSIA_TAGS_H__

#ifdef INITIALIZE_TAGS
#define CREATE_TAG(tag) const char* TAG_##tag=#tag
#else
#define CREATE_TAG(tag) extern const char* TAG_##tag
#endif

/* root tags */
CREATE_TAG(ResourceList);
CREATE_TAG(Resource);
CREATE_TAG(name);
CREATE_TAG(type);
CREATE_TAG(ResourceDescription);
CREATE_TAG(version);
CREATE_TAG(get);
CREATE_TAG(put);
CREATE_TAG(post);
CREATE_TAG(delete);
CREATE_TAG(QueryStringParameterList);
CREATE_TAG(inboundData);
CREATE_TAG(function);
CREATE_TAG(returnResult);
CREATE_TAG(notes);

/* Response tag */
CREATE_TAG(ResponseStatus);

/* System/Storage tags */
CREATE_TAG(StorageVolumeList);
CREATE_TAG(StorageVolume);
CREATE_TAG(StorageVolumeStatus);
CREATE_TAG(StorageFileList);
CREATE_TAG(StorageFile);
CREATE_TAG(volumeName);
CREATE_TAG(volumePath);
CREATE_TAG(volumeDescription);
CREATE_TAG(volumeType);
CREATE_TAG(storageLocation);
CREATE_TAG(storageType);
CREATE_TAG(capacity);
CREATE_TAG(freeSpace);
CREATE_TAG(fileName);
CREATE_TAG(fileTimeStamp);
CREATE_TAG(fileSize);

/* System/Network tags */
CREATE_TAG(NetworkInterfaceList);
CREATE_TAG(NetworkInterface);
CREATE_TAG(Discovery);
CREATE_TAG(UPnP);
CREATE_TAG(Zeroconf);
CREATE_TAG(MulticastDiscovery);
CREATE_TAG(portNo);
CREATE_TAG(ttl);
CREATE_TAG(PrimaryDNS);
CREATE_TAG(SecondaryDNS);

/* System/Video tags */
CREATE_TAG(VideoInput);
CREATE_TAG(VideoInputChannelList);
CREATE_TAG(VideoInputChannel);
CREATE_TAG(inputPort);
CREATE_TAG(powerLineFrequencyMode);
CREATE_TAG(whiteBalanceMode);
CREATE_TAG(whiteBalanceLevel);
CREATE_TAG(exposureMode);
CREATE_TAG(Exposure);
CREATE_TAG(exposureTarget);
CREATE_TAG(exposurePriority);
CREATE_TAG(exposureAutoMin);
CREATE_TAG(exposureAutoMax);
CREATE_TAG(gainLevel);
CREATE_TAG(brightnessLevel);
CREATE_TAG(contrastLevel);
CREATE_TAG(sharpnessLevel);
CREATE_TAG(saturationLevel);
CREATE_TAG(DayNightFilter);
CREATE_TAG(dayNightFilterType);
CREATE_TAG(blc);
CREATE_TAG(backlight);
CREATE_TAG(gbce);
CREATE_TAG(histDisplay);
CREATE_TAG(vsEnabled);
CREATE_TAG(ldcEnabled);
CREATE_TAG(sensorMode);
CREATE_TAG(AWBEngine);
CREATE_TAG(AWBMode);
CREATE_TAG(snfltCtrl);
CREATE_TAG(tnfltCtrl);
CREATE_TAG(VideoOverlay);
CREATE_TAG(TextOverlayList);
CREATE_TAG(TextOverlay);
CREATE_TAG(ImageOverlayList);
CREATE_TAG(ImageOverlay);
CREATE_TAG(PrivacyMask);
CREATE_TAG(maskoption);
CREATE_TAG(videoInputID);
CREATE_TAG(dateStampEnabled);
CREATE_TAG(timeStampEnabled);
CREATE_TAG(timeFormat);
CREATE_TAG(dateFormat);
CREATE_TAG(datePosition);
CREATE_TAG(timePosition);
CREATE_TAG(backgroundColor);
CREATE_TAG(fontColor);
CREATE_TAG(fontSize);
CREATE_TAG(displayText);
CREATE_TAG(horizontalAlignType);
CREATE_TAG(verticalAlignType);
CREATE_TAG(imageName);
CREATE_TAG(positionX);
CREATE_TAG(positionY);
CREATE_TAG(width);
CREATE_TAG(height);
CREATE_TAG(transparentColorEnabled);
CREATE_TAG(transparentColor);
CREATE_TAG(detailInfoEnabled);

/* System/Audio tags */
CREATE_TAG(AudioChannelList);
CREATE_TAG(AudioChannel);
CREATE_TAG(audioMode);
CREATE_TAG(microphoneEnabled);
CREATE_TAG(microphoneSource);
CREATE_TAG(microphoneVolume);
CREATE_TAG(speakerEnabled);
CREATE_TAG(speakerVolume);
CREATE_TAG(inputVolume);
CREATE_TAG(alarmLevel);
CREATE_TAG(alarmAudioFile);

/* System tags */
CREATE_TAG(Time);
CREATE_TAG(timeMode);
CREATE_TAG(localTime);
CREATE_TAG(daylight);
CREATE_TAG(timeZone);
CREATE_TAG(NtpServerList);
CREATE_TAG(NtpServer);
CREATE_TAG(addressingFormatType);
CREATE_TAG(hostName);
CREATE_TAG(ipv6Address);
CREATE_TAG(requestURL);
CREATE_TAG(statusCode);
CREATE_TAG(statusString);
CREATE_TAG(DeviceInfo);
CREATE_TAG(deviceName);
CREATE_TAG(deviceID);
CREATE_TAG(model);
CREATE_TAG(serialNumber);
CREATE_TAG(macAddress);
CREATE_TAG(firmwareVersion);
CREATE_TAG(firmwareReleasedDate);
CREATE_TAG(bootVersion);
CREATE_TAG(hardwareVersion);
CREATE_TAG(Logging);
CREATE_TAG(LocalLog);
CREATE_TAG(maxEntries);
CREATE_TAG(LogMessageList);
CREATE_TAG(LogMessage);
CREATE_TAG(logNo);
CREATE_TAG(dateTime);
CREATE_TAG(severity);
CREATE_TAG(message);

CREATE_TAG(DeviceStatus);
CREATE_TAG(currentDeviceTime);
CREATE_TAG(deviceUpTime);
CREATE_TAG(TemperatureList);
CREATE_TAG(Temperature);
CREATE_TAG(tempSensorDescription);
CREATE_TAG(temperature);
CREATE_TAG(CPUList);
CREATE_TAG(CPU);
CREATE_TAG(cpuDescription);
CREATE_TAG(cpuUtilization);
CREATE_TAG(MemoryList);
CREATE_TAG(Memory);
CREATE_TAG(memoryDescription);
CREATE_TAG(memoryUsage);
CREATE_TAG(memoryAvailable);

CREATE_TAG(IPAddress);
CREATE_TAG(ipVersion);
CREATE_TAG(addressingType);
CREATE_TAG(ipAddress);
CREATE_TAG(subnetMask);
CREATE_TAG(DefaultGateway);

/* Streaming tags */
CREATE_TAG(StreamingStatus);
CREATE_TAG(totalStreamingSessions);
CREATE_TAG(StreamingChannelList);
CREATE_TAG(StreamingChannel);
CREATE_TAG(StreamingSessionStatusList);
CREATE_TAG(StreamingSessionStatus);
CREATE_TAG(clientAddress);
CREATE_TAG(clientUserName);
CREATE_TAG(startDateTime);
CREATE_TAG(elapsedTime);
CREATE_TAG(bandwidth);
CREATE_TAG(id);
CREATE_TAG(channelName);
CREATE_TAG(enabled);
CREATE_TAG(disabled);
CREATE_TAG(Transport);
CREATE_TAG(rtspPortNo);
CREATE_TAG(maxPacketSize);
CREATE_TAG(ControlProtocolList);
CREATE_TAG(ControlProtocol);
CREATE_TAG(streamingTransport);
CREATE_TAG(Unicast);
CREATE_TAG(interfaceID);
CREATE_TAG(rtpTransportType);
CREATE_TAG(Multicast);
CREATE_TAG(Security);
CREATE_TAG(Video);
CREATE_TAG(videoInputChannelID);
CREATE_TAG(videoCodecTypeList);
CREATE_TAG(videoCodecType);
CREATE_TAG(videoCodecSel);
CREATE_TAG(videoScanType);
CREATE_TAG(videoResolutionWidthList);
CREATE_TAG(videoResolutionSel);
CREATE_TAG(videoResolutionWidth);
CREATE_TAG(videoResolutionHeight);
CREATE_TAG(videoQualityControlType);
CREATE_TAG(constantBitRate);
CREATE_TAG(fixedQuality);
CREATE_TAG(frameRateList1);
CREATE_TAG(frameRateList2);
CREATE_TAG(frameRateList3);
CREATE_TAG(maxFrameRate);
CREATE_TAG(keyFrameInterval);
CREATE_TAG(mirrorEnabled);
CREATE_TAG(localDisplay);
CREATE_TAG(clickSnapFileName);
CREATE_TAG(clickSnapStorage);
CREATE_TAG(demoCfg);
CREATE_TAG(Audio);
CREATE_TAG(audioInputChannelID);
CREATE_TAG(audioCompressionType);
CREATE_TAG(audioBitRate);
CREATE_TAG(audioSamplingRate);
CREATE_TAG(VideoAdvancedSettingList);
CREATE_TAG(VideoAdvancedSetting);
CREATE_TAG(ipratio);
CREATE_TAG(forceIFrame);
CREATE_TAG(qpInit);
CREATE_TAG(qpMin);
CREATE_TAG(qpMax);
CREATE_TAG(meConfig);
CREATE_TAG(packetSize);
CREATE_TAG(ROIEnable);

/* security tags*/
CREATE_TAG(UserList);
CREATE_TAG(User);
CREATE_TAG(userName);
CREATE_TAG(minNameLen);
CREATE_TAG(maxNameLen);
CREATE_TAG(password);
CREATE_TAG(maxPwdLen);
CREATE_TAG(privilegeLevel);
CREATE_TAG(ProtocolList);
CREATE_TAG(Protocol);
CREATE_TAG(protocol);

/* System/IO tags */
CREATE_TAG(IOPortList);
CREATE_TAG(IOInputPortList);
CREATE_TAG(IOOutputPortList);
CREATE_TAG(IOInputPort);
CREATE_TAG(triggering);
CREATE_TAG(IOOutputPort);
CREATE_TAG(PowerOnState);
CREATE_TAG(defaultState);
CREATE_TAG(outputState);

/* System/Serial tags */
CREATE_TAG(SerialPortList);
CREATE_TAG(SerialPort);
CREATE_TAG(serialPortType);
CREATE_TAG(duplexMode);
CREATE_TAG(direction);
CREATE_TAG(baudRate);
CREATE_TAG(dataBits);
CREATE_TAG(parityType);
CREATE_TAG(stopBits);

/* Custom/Event tags */
CREATE_TAG(EventNotification);
CREATE_TAG(EventTriggerList);
CREATE_TAG(EventTrigger);
CREATE_TAG(eventType);
CREATE_TAG(eventDescription);
CREATE_TAG(inputIOPortID);
CREATE_TAG(intervalBetweenEvents);
CREATE_TAG(inputType);
CREATE_TAG(outputType);
CREATE_TAG(EventTriggerNotificationList);
CREATE_TAG(EventTriggerNotification);
CREATE_TAG(notificationStatus);
CREATE_TAG(recordStatus);
CREATE_TAG(notificationMethod);
CREATE_TAG(notificationRecurrence);
CREATE_TAG(notificationInterval);
CREATE_TAG(EventSchedule);
CREATE_TAG(expireEnable);
CREATE_TAG(numWeeks);
CREATE_TAG(delschedule);
CREATE_TAG(TimeBlockList);
CREATE_TAG(TimeBlock);
CREATE_TAG(TimeRange);
CREATE_TAG(dayOfWeek);
CREATE_TAG(beginTime);
CREATE_TAG(endTime);
CREATE_TAG(EvenNotificationMethods);
CREATE_TAG(FTPFormat);
CREATE_TAG(uploadVideoClipEnabled);
CREATE_TAG(EmailFormat);
CREATE_TAG(senderEmailAddress);
CREATE_TAG(receiverEmailAddress);
CREATE_TAG(BodySetting);
CREATE_TAG(attachedVideoClipEnabled);
CREATE_TAG(numFilesAttach);
CREATE_TAG(minFilesAttach);
CREATE_TAG(maxFilesAttach);
CREATE_TAG(localstorageneabled);
CREATE_TAG(MediaFormat);
CREATE_TAG(videoClipFormatType);
CREATE_TAG(captureLength);
CREATE_TAG(ftpFileFormatType);
CREATE_TAG(attachedFileFormatType);
CREATE_TAG(sdFileFormatType);
CREATE_TAG(MailingNotificationList);
CREATE_TAG(MailingNotification);
CREATE_TAG(authenticationMode);
CREATE_TAG(accountName);
CREATE_TAG(FTPNotificationList);
CREATE_TAG(FTPNotification);
CREATE_TAG(uploadPath);
CREATE_TAG(HttpHostNotificationList);
CREATE_TAG(HttpHostNotification);
CREATE_TAG(url);
CREATE_TAG(protocolType);
CREATE_TAG(httpsPortNo);

/* Custom/Analytics tags */
CREATE_TAG(MotionDetectionList);
CREATE_TAG(MotionDetection);
CREATE_TAG(MotionDetectionRegionList);
CREATE_TAG(MotionDetectionRegion);
CREATE_TAG(samplingInterval);
CREATE_TAG(startTriggerTime);
CREATE_TAG(endTriggerTime);
CREATE_TAG(directionSensitivity);
CREATE_TAG(regionType);
CREATE_TAG(minObjectSize);
CREATE_TAG(maxObjectSize);
CREATE_TAG(Grid);
CREATE_TAG(rowGranularity);
CREATE_TAG(columnGranularity);
CREATE_TAG(maskEnabled);
CREATE_TAG(sensitivityLevel);
CREATE_TAG(detectionThreshold);
CREATE_TAG(RegionCoordinatesList);
CREATE_TAG(RegionCoordinates);
CREATE_TAG(FaceDetectionList);
CREATE_TAG(FaceDetection);
CREATE_TAG(FaceRecognitionList);
CREATE_TAG(FaceRecognition);
CREATE_TAG(conflevel);
CREATE_TAG(database);

/* Custom tags */
CREATE_TAG(LiveSettingList);
CREATE_TAG(LiveSetting);
CREATE_TAG(UserSettingList);
CREATE_TAG(UserSetting);
CREATE_TAG(VideoSettingList);
CREATE_TAG(VideoSetting);
CREATE_TAG(mirrorMode);
CREATE_TAG(CameraSettingList);
CREATE_TAG(CameraSetting);
CREATE_TAG(AudioSettingList);
CREATE_TAG(AudioSetting);
CREATE_TAG(DateTimeSettingList);
CREATE_TAG(DateTimeSetting);
CREATE_TAG(NetworkSettingList);
CREATE_TAG(NetworkSetting);
CREATE_TAG(serialPortMode);
CREATE_TAG(AlarmSettingList);
CREATE_TAG(AlarmSetting);
CREATE_TAG(StorageSettingList);
CREATE_TAG(StorageSetting);

#endif /* __PSIA_TAGS_H__ */
