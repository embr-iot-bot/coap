#include "devtool/fwd.h"
#include "devtool/lvgl.h"

#include <esp_log.h>

#if EMBR_BMGR_LVGL && defined(CONFIG_ESP_BOARD_DEV_LCD_TOUCH_SUPPORT)
static const char* TAG = "devtool::lvgl";

namespace devtool::inline lvgl {

void app::on_click(lv_event_t* event)
{
    lv_indev_t* indev = lv_event_get_indev(event);
    lv_point_t point;
    lv_indev_get_point(indev, &point);
    ESP_LOGI(TAG, "Clicked: %d, %d", point.x, point.y);
}

}
#endif