#include "config.h"

int main(int argc, char *argv[])
{
    //config arg
    string user = "caapap";
    string passwd = "jimi";
    string databasename = "tinyweb";

}

    //command line parse
    Config config;
    config.parse_arg(argc, argv);
    
    WebServer server;

    //init log

    server.init(config.PORT, user, passwd, databasename, config.LOGWrite, 
                config.OPT_LINGER, config.TRIGMode,  config.sql_num,  config.thread_num, 
                config.close_log, config.actor_model);

