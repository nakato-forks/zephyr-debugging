cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(app LANGUAGES C)

target_sources(app PRIVATE src/main.c)

# N!N #target_sources(app PRIVATE src/heartbeat.c)
# target_sources(app PRIVATE src/heartbeat_nn.c)
# target_sources(app PRIVATE src/shell.c)
# target_sources(app PRIVATE src/fs.c)

#target_sources(app PRIVATE src/test.c)
# N!N #target_sources(app PRIVATE src/input_adc.c)
# target_sources(app PRIVATE src/settings.c)
# N!N #target_sources(app PRIVATE src/bitbangtest.c)
