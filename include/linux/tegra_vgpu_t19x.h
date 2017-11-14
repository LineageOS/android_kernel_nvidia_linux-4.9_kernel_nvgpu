/*
 * Copyright (c) 2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef __TEGRA_VGPU_T19X_H
#define __TEGRA_VGPU_T19X_H

#define TEGRA_VGPU_CMD_ALLOC_CTX_HEADER		100
#define TEGRA_VGPU_CMD_FREE_CTX_HEADER		101
#define TEGRA_VGPU_CMD_MAP_SYNCPT		102
#define TEGRA_VGPU_CMD_TSG_BIND_CHANNEL_EX 	103

struct tegra_vgpu_alloc_ctx_header_params {
	u64 ch_handle;
	u64 ctx_header_va;
};

struct tegra_vgpu_free_ctx_header_params {
	u64 ch_handle;
};

struct tegra_vgpu_map_syncpt_params {
	u64 as_handle;
	u64 gpu_va;
	u64 len;
	u64 offset;
	u8 prot;
};

struct tegra_vgpu_tsg_bind_channel_ex_params {
	u32 tsg_id;
	u64 ch_handle;
	u32 subctx_id;
	u32 runqueue_sel;
};

union tegra_vgpu_t19x_params {
	struct tegra_vgpu_alloc_ctx_header_params alloc_ctx_header;
	struct tegra_vgpu_free_ctx_header_params free_ctx_header;
	struct tegra_vgpu_map_syncpt_params map_syncpt;
	struct tegra_vgpu_tsg_bind_channel_ex_params tsg_bind_channel_ex;
};

#define TEGRA_VGPU_ATTRIB_MAX_SUBCTX_COUNT	100

#endif