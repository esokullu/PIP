<?hh

class Controller {
	
	public function loadModel(string $name): Model {
		require(APP_DIR .'models/'. strtolower($name) .'.php');

		$model = new $name;
		return $model;
	}
	
	public function loadView(string $name): View {
		$view = new View($name);
		return $view;
	}
	
	public function loadPlugin(string $name): void {
		require(APP_DIR .'plugins/'. strtolower($name) .'.php');
	}
	
	public function loadHelper(string $name): /* @todo Something, maybe Helper interface */ {
		require(APP_DIR .'helpers/'. strtolower($name) .'.php');
		$helper = new $name;
		return $helper;
	}
	
	public function redirect(string $loc): void {
		global $config;
		header('Location: '. $config['base_url'] . $loc);
	}
    
}

?>