# SEEK
Hello participants of SEEK and SEEK Jr.! We hope you are super hyped for building some amazing rovers this year. In preparation for the competition and to get you started on your own code, this repo provides you with some starter code/examples with bluetooth modules, sensors, and motors! Please refer to the instructions below to get this repo on your local computer. 

## Step 1: Install git 
### Windows / macOS 
1. If you are using a Windows/mAcOS computer, download git directly from the [official website](https://git-scm.com/downloads). 
2. Open up Git bash 
3. Use the command 
```
git clone https://github.com/rsx-utoronto/SEEK.git
```
### Linux
1. Open up your terminal 
2. Use the command 
```
sudo apt-get install git 
```
3. Now, you can clone the repo
```
git clone https://github.com/rsx-utoronto/SEEK.git
```

## Step 2: Get your individual sensors and actuators working
We've sent you four technical modules that should give you what you need to get started. Everything you need should be in the *starter_code* folder:
* IR_sensor_example provides a means of testing your IR sensor.
* Dabble_BT starter lets you test that your arduino is responding to gamepad inputs from the Dabble Bluetooth app.
* ultrasonic_sensor_example demonstrates implementation of the ultrasonic sensor. (Note that you may need to modify the DIST_SCALE to work for your team's sensor.)

## Step 3: Put it all together!
* We have included the file *basic_driving_w_dabble* for you. This code combines the functionality of Dabble_BT_starter with the motor controller details taught in Technical Module #3
* From here, you can implement more precise driving capabilities, add sensor feedback in place of operator input for autonomous driving, and ultimately give your rover capabilities that will allow it to compete competition tasks!

## Additional Notes
You can ignore the 'competition_setup' and 'archive' folders:
* *competition_setup_for_rsx_members* contains the code and set-up steps the RSX team uses to give bluetooth modules distinct names before we give them to you. If you do want to change the name of your bluetooth module, feel free to use any of our code / methods!
* *archive* contains old starter code from before we discovered the Dabble app. You can reference it if you'd like, but keep in mind the bluetooth set-up steps mentioned are now obsolete.


## We hope you enjoy this hackathon!