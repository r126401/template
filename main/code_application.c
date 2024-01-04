/*
 * iotOnoff.c
 *
 *  Created on: 6 sept. 2020
 *      Author: t126401
 */



#include "dialogos_json.h"

#include "esp_err.h"
#include "esp_log.h"
#include "common_data.h"
#include "programmer.h"
#include "api_json.h"
#include "driver/gpio.h"
#include "conexiones.h"

#include "user_interface.h"



static const char *TAG = "APPLICATION";
xQueueHandle cola_gpio = NULL;

#define GPIO_OUTPUT_PIN_SEL  ((1ULL<<CONFIG_GPIO_PIN_RELE) | (1ULL<<CONFIG_GPIO_PIN_LED))
#define GPIO_INPUT_PIN_SEL  ((1ULL<<CONFIG_GPIO_PIN_BOTON) | (1ULL<<CONFIG_GPIO_PIN_RELE))

#define NUM_REPETICIONES    3




esp_err_t init_code_application(DATOS_APLICACION *datosApp) {



	DATOS_GENERALES *datosGenerales;
	datosGenerales = (DATOS_GENERALES*) calloc(1, sizeof(DATOS_GENERALES));
	datosApp->datosGenerales = datosGenerales;



	//gpio_rele_in_out();
	gpio_set_level(CONFIG_GPIO_PIN_RELE, OFF);

	return ESP_OK;

}

esp_err_t app_task(DATOS_APLICACION *datosApp) {



	return ESP_OK;
}



