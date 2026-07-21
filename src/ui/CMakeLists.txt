SET(SOURCES ui_comp_maingauge.c
    ui_comp.c
    ui_scr_main.c
    ui_scr_gauges1.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_rpm_gauge3_png.c
    ui_img_gaugetest180b_png.c
    fonts/ui_font_JetBrainsMono34bpp4.c
    fonts/ui_font_JetBrainsMonoReg48Bpp4.c
    fonts/ui_font_JetBrainsMonoReg60Bpp4.c)

add_library(ui ${SOURCES})
