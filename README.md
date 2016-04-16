# Electrotactiloscope

A wheel sculpture controlling a stop motion.

## What ?

The wheel has a laser and a photoresistor, when the beam is cut, a signal
is sent to a computer playing a video using mplayer/mpv.
The signal is actually a fake keyboard request to press a dot '.' which
is the instruction to play a frame and pause.

This code is for Teensy or Leonardo, the keyboard mode must be selected
and the country of the keyboard must be specified correctly.

## How ?

### Sensing side

A Teensy LC was used here and the laser can be found in any $1 store, or even
harvested from a CD/DVD.
The photo resistor was found in a cheap Chinese kit:

    https://tkkrlab.nl/wiki/Arduino_KY-018_Photo_resistor_module

### Actuating side

A simple xubuntu was used here, with the mpv player, to install it:

    sudo apt-get install mpv

To use it in "stop motion mode" as we did, just copy the configuration file:

    cp config ~/.config/mpv/

## Who ?

This project was possible thanks to Crealux, more details here:

    www.culture.fr/Actualites/Musee-Expos/CreaLux-C-Cultures-Numeriques

Feel free to ask if you anything needs to be detailed, twitter should work:

    https://twitter.com/CedHon

