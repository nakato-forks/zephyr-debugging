#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

#include <zephyr/kernel.h>

#include <app_version.h>

#define DELAY_TIME K_MSEC(100)

int main(void)
{
	LOG_INF("App:\n  - Version: %s", APP_VERSION_STRING);

	while (1) {
		k_sleep(DELAY_TIME);
	}

	return 0;
}
