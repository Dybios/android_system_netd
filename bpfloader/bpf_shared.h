/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// const values shared by both kernel program and userspace bpfloader

#define BPF_PROG_SEC_NAME "kern_prog"

#define COOKIE_TAG_MAP 0xbfceaaffffffffff
#define UID_COUNTERSET_MAP 0xbfdceeafffffffff
#define UID_STATS_MAP 0xbfdaafffffffffff
#define TAG_STATS_MAP 0xbfaaafffffffffff
#define IFACE_STATS_MAP 0xbf1faceaafffffff
