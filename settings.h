// WiFi Configuration
const char* ssid = "MiFibra-2D79-terraza";
const char* password = "";

// MQTT Configuration
const char* mqtt_server = "192.168.1.114";
const int mqtt_port = 1883;
const char* mqtt_id = "battery_control";
const char* mqtt_sub_topic_healthcheck = "/home/battery_control";
const char* mqtt_pub_topic_voltage = "/home/battery_control/voltage";
const char* mqtt_sub_topic_operation = "/home/battery_control/operation";

// Other params
const int update_time_sensors = 60000;
