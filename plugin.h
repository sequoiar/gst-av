/*
 * Copyright (C) 2009-2010 Felipe Contreras
 *
 * Author: Felipe Contreras <felipe.contreras@gmail.com>
 *
 * This file may be used under the terms of the GNU Lesser General Public
 * License version 2.1.
 */

#ifndef PLUGIN_H
#define PLUGIN_H

#include <gst/gst.h>

extern GstDebugCategory *gstav_debug;

struct AVCodecContext;
struct AVCodec;

int gst_av_codec_open(struct AVCodecContext *avctx, struct AVCodec *codec);
int gst_av_codec_close(struct AVCodecContext *avctx);

#endif /* PLUGIN_H */
