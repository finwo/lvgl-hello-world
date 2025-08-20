#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "app.h"

// #include "util/get_bin_path.h"
#include "util/fs.h"

#include "assets/public-pixel.h"

int app_setup() {
  // char *appDir = dirname(get_bin_path());

  // Set background to recognizable color
  lv_obj_set_style_bg_color(lv_screen_active(), lv_color_hex(0x2255AA), LV_PART_MAIN);

  // // Check if we can load the font
  // char *font_file;
  // asprintf(&font_file, "%s/public-pixel.ttf", appDir);
  // log_debug("Target font file: %s\n", font_file);
  // if (!file_exists(font_file, "r")) {
  //   log_fatal("Font file could not be read");
  //   exit(1);
  // }

  // // Actually load the font
  // int font_size = 24;
  // struct buf *font_data = file_get_contents(font_file);
  // lv_font_t *customFont = lv_tiny_ttf_create_data(font_data->data, font_data->len, font_size);
  lv_style_t *fontStyle = calloc(1, sizeof(lv_style_t));
  lv_style_init(fontStyle);
  lv_style_set_text_font(fontStyle, &public_pixel);
  lv_style_set_text_color(fontStyle, lv_color_hex(0xFFFFFF));
  lv_obj_add_style(lv_screen_active(), fontStyle, 0);

  // Add a label in the center so we see the result
  lv_obj_t *label_example = lv_label_create(lv_screen_active());
  lv_label_set_text(label_example, "Hello World");
  lv_obj_center(label_example);

  return 0;
}

void app_loop(uint32_t elapsedTime) {
  // Nothing interactive here, intentionally empty
}

#ifdef __cplusplus
} // extern "C"
#endif
