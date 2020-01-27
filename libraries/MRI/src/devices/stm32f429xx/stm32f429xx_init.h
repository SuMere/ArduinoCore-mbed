/* Copyright 2012 Adam Green     (http://mbed.org/users/AdamGreen/)
   Copyright 2015 Chang,Jia-Rung (https://github.com/JaredCJR)

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
/* Routines used by mri that are specific to the STM32F429xx device. */
#ifndef _STM32F429XX_H_
#define _STM32F429XX_H_

#include <stdint.h>
#include "core/token.h"
#include "stm32f429xx_usart.h"

void __mriStm32f429xx_Init(Token* pParameterTokens);

#endif /* _STM32F429XX_H_ */
