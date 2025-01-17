// 0x16000CA4
const GeoLayout marios_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, marios_cap_000_displaylist_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, marios_cap_001_switch_opt1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, marios_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, marios_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x16000CF0
const GeoLayout marios_metal_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, marios_metal_cap_000_displaylist_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, marios_metal_cap_001_switch_opt1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, marios_metal_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, marios_metal_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};


// 0x16000D3C
const GeoLayout marios_wing_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, marios_wing_cap_000_displaylist_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, marios_wing_cap_001_switch_opt1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, marios_wing_cap_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, marios_wing_cap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x16000DA8
const GeoLayout marios_winged_metal_cap_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_9_VERTS, 0xB4, 75),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ASM(10, geo_update_layer_transparency),
         GEO_SWITCH_CASE(2, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_NODE_START(),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, mario_cap_seg3_dl_03022FF8),
               GEO_DISPLAY_LIST(LAYER_ALPHA, mario_cap_seg3_dl_03023108),
            GEO_CLOSE_NODE(),
            GEO_NODE_START(),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_TRANSPARENT, mario_cap_seg3_dl_03023298),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout marios_wing_cap_001_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, marios_wing_cap_000_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};

const GeoLayout marios_cap_001_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, marios_cap_000_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};

const GeoLayout marios_metal_cap_001_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, marios_metal_cap_000_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};