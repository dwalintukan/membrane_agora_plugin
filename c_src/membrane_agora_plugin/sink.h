#pragma once

#include <csignal>
#include <cstring>
#include <sstream>
#include <string>
#include <thread>
#include <unistd.h>

#include "IAgoraService.h"
#include "NGIAgoraRtcConnection.h"
#include "log.h"
// #include "common/sample_common.h"

#include "NGIAgoraAudioTrack.h"
#include "NGIAgoraLocalUser.h"
#include "NGIAgoraMediaNodeFactory.h"
#include "NGIAgoraMediaNode.h"
#include "NGIAgoraVideoTrack.h"

typedef struct _SinkState
{
  agora::agora_refptr<agora::rtc::IVideoEncodedImageSender> videoEncodedFrameSender;
} SinkState;

#include "_generated/sink.h"
