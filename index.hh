<?hh
/*
 * hack-lang v0.9.0
 */

//Start the Session
session_start(); 

// Defines
define('ROOT_DIR', realpath(dirname(__FILE__)) .'/');
define('APP_DIR', ROOT_DIR .'application/');

// Includes
require(APP_DIR . 'config/config.hh');
require(ROOT_DIR .'system/model.hh');
require(ROOT_DIR .'system/view.hh');
require(ROOT_DIR .'system/controller.hh');
require(ROOT_DIR . 'system/hack_mvc.hh');

// Define base URL
global $config;
define('BASE_URL', $config['base_url']);

hack_mvc();

?>
