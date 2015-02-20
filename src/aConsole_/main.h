/*
	Copyright 2015 Adejair J�nior

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
#include <iostream>

#include "SDK\amx\amx.h"
#include "SDK\plugincommon.h"

#define AUTOR_PLUGIN					"Adejair J�nior"

using namespace std;



#pragma once
class main
{
public:
	static cell AMX_NATIVE_CALL XXT_MyPassWord(AMX *dataAmx, cell *aParams);
};
