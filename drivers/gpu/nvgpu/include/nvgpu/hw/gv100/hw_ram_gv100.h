/*
 * Copyright (c) 2017, NVIDIA CORPORATION.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/*
 * Function naming determines intended use:
 *
 *     <x>_r(void) : Returns the offset for register <x>.
 *
 *     <x>_o(void) : Returns the offset for element <x>.
 *
 *     <x>_w(void) : Returns the word offset for word (4 byte) element <x>.
 *
 *     <x>_<y>_s(void) : Returns size of field <y> of register <x> in bits.
 *
 *     <x>_<y>_f(u32 v) : Returns a value based on 'v' which has been shifted
 *         and masked to place it at field <y> of register <x>.  This value
 *         can be |'d with others to produce a full register value for
 *         register <x>.
 *
 *     <x>_<y>_m(void) : Returns a mask for field <y> of register <x>.  This
 *         value can be ~'d and then &'d to clear the value of field <y> for
 *         register <x>.
 *
 *     <x>_<y>_<z>_f(void) : Returns the constant value <z> after being shifted
 *         to place it at field <y> of register <x>.  This value can be |'d
 *         with others to produce a full register value for <x>.
 *
 *     <x>_<y>_v(u32 r) : Returns the value of field <y> from a full register
 *         <x> value 'r' after being shifted to place its LSB at bit 0.
 *         This value is suitable for direct comparison with other unshifted
 *         values appropriate for use in field <y> of register <x>.
 *
 *     <x>_<y>_<z>_v(void) : Returns the constant value for <z> defined for
 *         field <y> of register <x>.  This value is suitable for direct
 *         comparison with unshifted values appropriate for use in field <y>
 *         of register <x>.
 */
#ifndef _hw_ram_gv100_h_
#define _hw_ram_gv100_h_

static inline u32 ram_in_ramfc_s(void)
{
	return 4096;
}
static inline u32 ram_in_ramfc_w(void)
{
	return 0;
}
static inline u32 ram_in_page_dir_base_target_f(u32 v)
{
	return (v & 0x3) << 0;
}
static inline u32 ram_in_page_dir_base_target_w(void)
{
	return 128;
}
static inline u32 ram_in_page_dir_base_target_vid_mem_f(void)
{
	return 0x0;
}
static inline u32 ram_in_page_dir_base_target_sys_mem_coh_f(void)
{
	return 0x2;
}
static inline u32 ram_in_page_dir_base_target_sys_mem_ncoh_f(void)
{
	return 0x3;
}
static inline u32 ram_in_page_dir_base_vol_w(void)
{
	return 128;
}
static inline u32 ram_in_page_dir_base_vol_true_f(void)
{
	return 0x4;
}
static inline u32 ram_in_page_dir_base_vol_false_f(void)
{
	return 0x0;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_f(u32 v)
{
	return (v & 0x1) << 4;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_m(void)
{
	return 0x1 << 4;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_w(void)
{
	return 128;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_true_f(void)
{
	return 0x10;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_f(u32 v)
{
	return (v & 0x1) << 5;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_m(void)
{
	return 0x1 << 5;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_w(void)
{
	return 128;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_true_f(void)
{
	return 0x20;
}
static inline u32 ram_in_big_page_size_f(u32 v)
{
	return (v & 0x1) << 11;
}
static inline u32 ram_in_big_page_size_m(void)
{
	return 0x1 << 11;
}
static inline u32 ram_in_big_page_size_w(void)
{
	return 128;
}
static inline u32 ram_in_big_page_size_128kb_f(void)
{
	return 0x0;
}
static inline u32 ram_in_big_page_size_64kb_f(void)
{
	return 0x800;
}
static inline u32 ram_in_page_dir_base_lo_f(u32 v)
{
	return (v & 0xfffff) << 12;
}
static inline u32 ram_in_page_dir_base_lo_w(void)
{
	return 128;
}
static inline u32 ram_in_page_dir_base_hi_f(u32 v)
{
	return (v & 0xffffffff) << 0;
}
static inline u32 ram_in_page_dir_base_hi_w(void)
{
	return 129;
}
static inline u32 ram_in_engine_cs_w(void)
{
	return 132;
}
static inline u32 ram_in_engine_cs_wfi_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_engine_cs_wfi_f(void)
{
	return 0x0;
}
static inline u32 ram_in_engine_cs_fg_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_engine_cs_fg_f(void)
{
	return 0x8;
}
static inline u32 ram_in_engine_wfi_mode_f(u32 v)
{
	return (v & 0x1) << 2;
}
static inline u32 ram_in_engine_wfi_mode_w(void)
{
	return 132;
}
static inline u32 ram_in_engine_wfi_mode_physical_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_engine_wfi_mode_virtual_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_engine_wfi_target_f(u32 v)
{
	return (v & 0x3) << 0;
}
static inline u32 ram_in_engine_wfi_target_w(void)
{
	return 132;
}
static inline u32 ram_in_engine_wfi_target_sys_mem_coh_v(void)
{
	return 0x00000002;
}
static inline u32 ram_in_engine_wfi_target_sys_mem_ncoh_v(void)
{
	return 0x00000003;
}
static inline u32 ram_in_engine_wfi_target_local_mem_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_engine_wfi_ptr_lo_f(u32 v)
{
	return (v & 0xfffff) << 12;
}
static inline u32 ram_in_engine_wfi_ptr_lo_w(void)
{
	return 132;
}
static inline u32 ram_in_engine_wfi_ptr_hi_f(u32 v)
{
	return (v & 0xff) << 0;
}
static inline u32 ram_in_engine_wfi_ptr_hi_w(void)
{
	return 133;
}
static inline u32 ram_in_engine_wfi_veid_f(u32 v)
{
	return (v & 0x3f) << 0;
}
static inline u32 ram_in_engine_wfi_veid_w(void)
{
	return 134;
}
static inline u32 ram_in_eng_method_buffer_addr_lo_f(u32 v)
{
	return (v & 0xffffffff) << 0;
}
static inline u32 ram_in_eng_method_buffer_addr_lo_w(void)
{
	return 136;
}
static inline u32 ram_in_eng_method_buffer_addr_hi_f(u32 v)
{
	return (v & 0x1ffff) << 0;
}
static inline u32 ram_in_eng_method_buffer_addr_hi_w(void)
{
	return 137;
}
static inline u32 ram_in_sc_page_dir_base_target_f(u32 v, u32 i)
{
	return (v & 0x3) << (0 + i*0);
}
static inline u32 ram_in_sc_page_dir_base_target__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_page_dir_base_target_vid_mem_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_sc_page_dir_base_target_invalid_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_sc_page_dir_base_target_sys_mem_coh_v(void)
{
	return 0x00000002;
}
static inline u32 ram_in_sc_page_dir_base_target_sys_mem_ncoh_v(void)
{
	return 0x00000003;
}
static inline u32 ram_in_sc_page_dir_base_vol_f(u32 v, u32 i)
{
	return (v & 0x1) << (2 + i*0);
}
static inline u32 ram_in_sc_page_dir_base_vol__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_page_dir_base_vol_true_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_sc_page_dir_base_vol_false_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_f(u32 v, u32 i)
{
	return (v & 0x1) << (4 + i*0);
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_enabled_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_disabled_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_f(u32 v, u32 i)
{
	return (v & 0x1) << (5 + i*0);
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_enabled_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_disabled_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_sc_use_ver2_pt_format_f(u32 v, u32 i)
{
	return (v & 0x1) << (10 + i*0);
}
static inline u32 ram_in_sc_use_ver2_pt_format__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_use_ver2_pt_format_false_v(void)
{
	return 0x00000000;
}
static inline u32 ram_in_sc_use_ver2_pt_format_true_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_sc_big_page_size_f(u32 v, u32 i)
{
	return (v & 0x1) << (11 + i*0);
}
static inline u32 ram_in_sc_big_page_size__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_big_page_size_64kb_v(void)
{
	return 0x00000001;
}
static inline u32 ram_in_sc_page_dir_base_lo_f(u32 v, u32 i)
{
	return (v & 0xfffff) << (12 + i*0);
}
static inline u32 ram_in_sc_page_dir_base_lo__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_page_dir_base_hi_f(u32 v, u32 i)
{
	return (v & 0xffffffff) << (0 + i*0);
}
static inline u32 ram_in_sc_page_dir_base_hi__size_1_v(void)
{
	return 0x00000040;
}
static inline u32 ram_in_sc_page_dir_base_target_0_f(u32 v)
{
	return (v & 0x3) << 0;
}
static inline u32 ram_in_sc_page_dir_base_target_0_w(void)
{
	return 168;
}
static inline u32 ram_in_sc_page_dir_base_vol_0_f(u32 v)
{
	return (v & 0x1) << 2;
}
static inline u32 ram_in_sc_page_dir_base_vol_0_w(void)
{
	return 168;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_0_f(u32 v)
{
	return (v & 0x1) << 4;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_0_w(void)
{
	return 168;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_0_f(u32 v)
{
	return (v & 0x1) << 5;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_0_w(void)
{
	return 168;
}
static inline u32 ram_in_sc_use_ver2_pt_format_0_f(u32 v)
{
	return (v & 0x1) << 10;
}
static inline u32 ram_in_sc_use_ver2_pt_format_0_w(void)
{
	return 168;
}
static inline u32 ram_in_sc_big_page_size_0_f(u32 v)
{
	return (v & 0x1) << 11;
}
static inline u32 ram_in_sc_big_page_size_0_w(void)
{
	return 168;
}
static inline u32 ram_in_sc_page_dir_base_lo_0_f(u32 v)
{
	return (v & 0xfffff) << 12;
}
static inline u32 ram_in_sc_page_dir_base_lo_0_w(void)
{
	return 168;
}
static inline u32 ram_in_sc_page_dir_base_hi_0_f(u32 v)
{
	return (v & 0xffffffff) << 0;
}
static inline u32 ram_in_sc_page_dir_base_hi_0_w(void)
{
	return 169;
}
static inline u32 ram_in_base_shift_v(void)
{
	return 0x0000000c;
}
static inline u32 ram_in_alloc_size_v(void)
{
	return 0x00001000;
}
static inline u32 ram_fc_size_val_v(void)
{
	return 0x00000200;
}
static inline u32 ram_fc_gp_put_w(void)
{
	return 0;
}
static inline u32 ram_fc_userd_w(void)
{
	return 2;
}
static inline u32 ram_fc_userd_hi_w(void)
{
	return 3;
}
static inline u32 ram_fc_signature_w(void)
{
	return 4;
}
static inline u32 ram_fc_gp_get_w(void)
{
	return 5;
}
static inline u32 ram_fc_pb_get_w(void)
{
	return 6;
}
static inline u32 ram_fc_pb_get_hi_w(void)
{
	return 7;
}
static inline u32 ram_fc_pb_top_level_get_w(void)
{
	return 8;
}
static inline u32 ram_fc_pb_top_level_get_hi_w(void)
{
	return 9;
}
static inline u32 ram_fc_acquire_w(void)
{
	return 12;
}
static inline u32 ram_fc_sem_addr_hi_w(void)
{
	return 14;
}
static inline u32 ram_fc_sem_addr_lo_w(void)
{
	return 15;
}
static inline u32 ram_fc_sem_payload_lo_w(void)
{
	return 16;
}
static inline u32 ram_fc_sem_payload_hi_w(void)
{
	return 39;
}
static inline u32 ram_fc_sem_execute_w(void)
{
	return 17;
}
static inline u32 ram_fc_gp_base_w(void)
{
	return 18;
}
static inline u32 ram_fc_gp_base_hi_w(void)
{
	return 19;
}
static inline u32 ram_fc_gp_fetch_w(void)
{
	return 20;
}
static inline u32 ram_fc_pb_fetch_w(void)
{
	return 21;
}
static inline u32 ram_fc_pb_fetch_hi_w(void)
{
	return 22;
}
static inline u32 ram_fc_pb_put_w(void)
{
	return 23;
}
static inline u32 ram_fc_pb_put_hi_w(void)
{
	return 24;
}
static inline u32 ram_fc_pb_header_w(void)
{
	return 33;
}
static inline u32 ram_fc_pb_count_w(void)
{
	return 34;
}
static inline u32 ram_fc_subdevice_w(void)
{
	return 37;
}
static inline u32 ram_fc_target_w(void)
{
	return 43;
}
static inline u32 ram_fc_hce_ctrl_w(void)
{
	return 57;
}
static inline u32 ram_fc_chid_w(void)
{
	return 58;
}
static inline u32 ram_fc_chid_id_f(u32 v)
{
	return (v & 0xfff) << 0;
}
static inline u32 ram_fc_chid_id_w(void)
{
	return 0;
}
static inline u32 ram_fc_config_w(void)
{
	return 61;
}
static inline u32 ram_fc_runlist_timeslice_w(void)
{
	return 62;
}
static inline u32 ram_fc_set_channel_info_w(void)
{
	return 63;
}
static inline u32 ram_userd_base_shift_v(void)
{
	return 0x00000009;
}
static inline u32 ram_userd_chan_size_v(void)
{
	return 0x00000200;
}
static inline u32 ram_userd_put_w(void)
{
	return 16;
}
static inline u32 ram_userd_get_w(void)
{
	return 17;
}
static inline u32 ram_userd_ref_w(void)
{
	return 18;
}
static inline u32 ram_userd_put_hi_w(void)
{
	return 19;
}
static inline u32 ram_userd_ref_threshold_w(void)
{
	return 20;
}
static inline u32 ram_userd_top_level_get_w(void)
{
	return 22;
}
static inline u32 ram_userd_top_level_get_hi_w(void)
{
	return 23;
}
static inline u32 ram_userd_get_hi_w(void)
{
	return 24;
}
static inline u32 ram_userd_gp_get_w(void)
{
	return 34;
}
static inline u32 ram_userd_gp_put_w(void)
{
	return 35;
}
static inline u32 ram_userd_gp_top_level_get_w(void)
{
	return 22;
}
static inline u32 ram_userd_gp_top_level_get_hi_w(void)
{
	return 23;
}
static inline u32 ram_rl_entry_size_v(void)
{
	return 0x00000010;
}
static inline u32 ram_rl_entry_type_f(u32 v)
{
	return (v & 0x1) << 0;
}
static inline u32 ram_rl_entry_type_channel_v(void)
{
	return 0x00000000;
}
static inline u32 ram_rl_entry_type_tsg_v(void)
{
	return 0x00000001;
}
static inline u32 ram_rl_entry_id_f(u32 v)
{
	return (v & 0xfff) << 0;
}
static inline u32 ram_rl_entry_chan_runqueue_selector_f(u32 v)
{
	return (v & 0x1) << 1;
}
static inline u32 ram_rl_entry_chan_inst_target_f(u32 v)
{
	return (v & 0x3) << 4;
}
static inline u32 ram_rl_entry_chan_inst_target_sys_mem_ncoh_v(void)
{
	return 0x00000003;
}
static inline u32 ram_rl_entry_chan_userd_target_f(u32 v)
{
	return (v & 0x3) << 6;
}
static inline u32 ram_rl_entry_chan_userd_target_vid_mem_v(void)
{
	return 0x00000000;
}
static inline u32 ram_rl_entry_chan_userd_target_vid_mem_nvlink_coh_v(void)
{
	return 0x00000001;
}
static inline u32 ram_rl_entry_chan_userd_target_sys_mem_coh_v(void)
{
	return 0x00000002;
}
static inline u32 ram_rl_entry_chan_userd_target_sys_mem_ncoh_v(void)
{
	return 0x00000003;
}
static inline u32 ram_rl_entry_chan_userd_ptr_lo_f(u32 v)
{
	return (v & 0xffffff) << 8;
}
static inline u32 ram_rl_entry_chan_userd_ptr_hi_f(u32 v)
{
	return (v & 0xffffffff) << 0;
}
static inline u32 ram_rl_entry_chid_f(u32 v)
{
	return (v & 0xfff) << 0;
}
static inline u32 ram_rl_entry_chan_inst_ptr_lo_f(u32 v)
{
	return (v & 0xfffff) << 12;
}
static inline u32 ram_rl_entry_chan_inst_ptr_hi_f(u32 v)
{
	return (v & 0xffffffff) << 0;
}
static inline u32 ram_rl_entry_tsg_timeslice_scale_f(u32 v)
{
	return (v & 0xf) << 16;
}
static inline u32 ram_rl_entry_tsg_timeslice_scale_3_v(void)
{
	return 0x00000003;
}
static inline u32 ram_rl_entry_tsg_timeslice_timeout_f(u32 v)
{
	return (v & 0xff) << 24;
}
static inline u32 ram_rl_entry_tsg_timeslice_timeout_128_v(void)
{
	return 0x00000080;
}
static inline u32 ram_rl_entry_tsg_timeslice_timeout_disable_v(void)
{
	return 0x00000000;
}
static inline u32 ram_rl_entry_tsg_length_f(u32 v)
{
	return (v & 0xff) << 0;
}
static inline u32 ram_rl_entry_tsg_length_init_v(void)
{
	return 0x00000000;
}
static inline u32 ram_rl_entry_tsg_length_min_v(void)
{
	return 0x00000001;
}
static inline u32 ram_rl_entry_tsg_length_max_v(void)
{
	return 0x00000080;
}
static inline u32 ram_rl_entry_tsg_tsgid_f(u32 v)
{
	return (v & 0xfff) << 0;
}
static inline u32 ram_rl_entry_chan_userd_ptr_align_shift_v(void)
{
	return 0x00000008;
}
static inline u32 ram_rl_entry_chan_userd_align_shift_v(void)
{
	return 0x00000008;
}
static inline u32 ram_rl_entry_chan_inst_ptr_align_shift_v(void)
{
	return 0x0000000c;
}
#endif
