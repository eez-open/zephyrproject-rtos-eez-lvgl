#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

extern const lv_img_dsc_t img_logo_eez;
extern const lv_img_dsc_t img_logo_lvgl;
extern const lv_img_dsc_t img_zephyre_logo;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[3];


#endif /*EEZ_LVGL_UI_IMAGES_H*/