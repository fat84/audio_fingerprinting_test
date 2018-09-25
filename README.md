# About emptyExample

### Installation

Requires the following addons:

Download the add ons from the repositories and drag them to the openFrameworks addons folder.
ofxGrt
ofxGui
ofxMaxim
ofxOsc

### Operation

The app has been harcoded for now to run with two toys that are were trained in the model. Open the application.

Open the application and press G to open the GUI, in the GUI press L to load a model, open the model saved in the models folder.

Use one of the toys to be recogznined.

The RMS value is being sent to localhost/ via OSC, the parameters are the float of RMS value and one int for the classification of the sounds.

int 1 : background noise
int 2 : shaker
int 3 : wooden toy
