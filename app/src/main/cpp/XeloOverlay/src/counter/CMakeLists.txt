add_library(counter SHARED fps.cpp)

# Разрешаем неразрешённые символы для этой библиотеки
target_link_options(counter PRIVATE -Wl,--allow-shlib-undefined)

# Линкуем с необходимыми системными библиотеками
target_link_libraries(counter
    log
    android
    EGL
    GLESv2
)
