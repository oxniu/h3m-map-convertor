#ifndef __OBJECTS_SECTION_H_DEF__
#define __OBJECTS_SECTION_H_DEF__

#include "../../homm3tools/h3m/h3mlib/h3mlib.h"
#include "../../homm3tools/h3m/h3mlib/h3mlib_ctx.h"

#include "../3rdparty/json/random_seed.h"
#include "../3rdparty/json/json.h"

#include "./objects/object_hero.h"

int get_map_objects_json(json_object *result, h3mlib_ctx_t ctx);

#endif
