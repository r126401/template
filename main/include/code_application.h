/*
 * code_application.h
 *
 *  Created on: 22 dic 2023
 *      Author: esp8266
 */

#ifndef MAIN_INCLUDE_CODE_APPLICATION_H_
#define MAIN_INCLUDE_CODE_APPLICATION_H_

#include "esp_err.h"
#include "common_data.h"

esp_err_t init_code_application(DATOS_APLICACION *datosApp);
esp_err_t app_task(DATOS_APLICACION *datosApp);



#endif /* MAIN_INCLUDE_CODE_APPLICATION_H_ */
