#include <cstdlib>

#include "CalcResourceFactory.h"
#include "CalcServiceSettingsFactory.h"
#include "CalcService.h"
//https://cdmana.com/2021/10/20211008191729565o.html
int main(const int, const char**)
{
    auto calc_resource_factory = make_shared<CalcResourceFactory>();
    auto calc_service_settings_factory = 
        make_shared<CalcServiceSettingsFactory>();
    
    CalcService calc_service {
        calc_resource_factory, calc_service_settings_factory};
    
    calc_service.start();
    
    return EXIT_SUCCESS;
}
//ee5d3be33d0953dec1e3
//c9809c2c769dd23651d0f2ffd5495bd50da4a9b

//api_secret=243ff5897fcd6ec23f4dbf822535ce0f

//app_id=f08cf18c015409b2b9a6079ab753aced