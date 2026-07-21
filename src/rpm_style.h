#pragma once

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

void set_arc_indicator_color(lv_obj_t *obj, lv_color_t color);
void set_bar_indicator_color(lv_obj_t *obj, lv_color_t color);
void set_rpm_arc_color(lv_obj_t *obj, lv_color_t color);

#ifdef __cplusplus
}
#endif