/*  Copyright 2013 Theo Berkau

    This file is part of YabauseUT

    YabauseUT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    YabauseUT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with YabauseUT; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef MPEGH
#define MPEGH

typedef struct 
{
   int delay;
   u8 play_status;
   u8 play_status_mask;
   u8 mpeg_audio_status;
   u8 mpeg_audio_status_mask;
   u8 mpeg_video_status;
   u8 mpeg_video_status_mask;
   BOOL v_counter_inc;
} test_mpeg_status_struct;

void mpeg_test();

void mpeg_cmd_test();
void mpeg_play_test();

void test_mpegplay_init();
void test_mpegplay_play();
void test_mpegplay_pause();
void test_mpegplay_unpause();
void test_mpegplay_stop();

#endif