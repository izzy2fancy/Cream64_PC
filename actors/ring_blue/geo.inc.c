#include "src/game/envfx_snow.h"

const GeoLayout blue_ring_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, ring_blue_RingModel_mesh_layer_1),
		GEO_DISPLAY_LIST(1, ring_blue_material_revert_render_settings),
		GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 50),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout blue_ring_no_shadow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, ring_blue_RingModel_mesh_layer_1),
		GEO_DISPLAY_LIST(1, ring_blue_material_revert_render_settings),
		//GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 50),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
