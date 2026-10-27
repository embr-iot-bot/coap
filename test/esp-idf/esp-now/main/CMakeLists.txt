if(IS_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/../components/gen_bmgr_codes")
    list(APPEND requires gen_bmgr_codes)
    list(APPEND compile_definitions BMGR=1)
endif()

idf_component_register(
    SRCS button.cpp lvgl.cpp main.cpp misc.cpp touch.cpp
    INCLUDE_DIRS "include"
    REQUIRES
        #embr-bmgr
        ${requires} esp_wifi
    )
