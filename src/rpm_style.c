#include "rpm_style.h"

void set_arc_indicator_color(lv_obj_t *obj, lv_color_t color)
{
    if (obj == NULL) {
        return;
    }

    lv_obj_set_style_arc_color(obj, color, LV_PART_INDICATOR);
}

void set_bar_indicator_color(lv_obj_t *obj, lv_color_t color)
{
    if (obj == NULL) {
        return;
    }

    lv_obj_set_style_bg_color(obj, color, LV_PART_INDICATOR);
}

void set_rpm_arc_color(lv_obj_t *obj, lv_color_t color)
{
    set_arc_indicator_color(obj, color);
}