#pragma once

#include <embr/bmgr/dev_led_strip.h>

#include <embr/esp-idf/wifi/fwd.h>

#include <esp_wifi.h>

// DEBT: Named this folder 'devtool' out of habit, but that's inaccurate for this ESP-NOW
// specific test

namespace embr::wifi {

// Crudely, we prefer pointer here over std::array
constexpr const uint8_t* broadcast_mac = wifi::addr::broadcast.data();

}

namespace embr::inline test {

struct color;

esp_err_t set_pixel(const color&);

extern embr::bmgr::dev_led_strip led_strip;

// DEBT: Make this configurable.  These dudes can be bright!
static constexpr float led_intensity = 0.2;

}

