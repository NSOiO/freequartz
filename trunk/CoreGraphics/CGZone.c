/* Copyright 2010 Smartmobili SARL
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <pthread.h>

#include "CGBasePriv.h"
#include "CGZonePriv.h"

static pthread_once_t	gzone_create_once = PTHREAD_ONCE_INIT;
static void* gZone = NULL;

void 
zone_create(void)
{
  return;
}

void* 
CGSZoneCreate()
{
  if ( !gZone )
	  pthread_once(&gzone_create_once, zone_create);
  
  return gZone;
}