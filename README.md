# About emptyExample

Source project is [here](https://github.com/ml4a/ml4a-ofx/tree/master/apps/AudioClassifier)

### Installation and addons

Requires the following addons:

Download the add ons from the repositories and drag them to the openFrameworks addons folder.

* [ofxGrt](https://github.com/nickgillian/ofxGrt)
* [ofxMaxim](https://github.com/falcon4ever/ofxMaxim)

On project generator make sure to add the add ons above and these ones:
* ofxGui
* ofxOsc

### Cross Compiling in windows

* Use the [project generator](https://openframeworks.cc/learning/01_basics/create_a_new_project/) to create a new project. Remember to include the addons above.

* Copy all files in src/ and bin/data


### Operation

The app has been harcoded for now to run with two toys that are were trained in the model. Open the application.

Open the application and press G to open the GUI, in the GUI press L to load a model, open the model saved in the models folder.

Use one of the toys to be recogznined.

The RMS value is being sent to localhost/ via OSC, the parameters are the float of RMS value and one int for the classification of the sounds.

int 1 : background noise
int 2 : shaker
int 3 : wooden toy
