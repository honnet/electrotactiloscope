/*
   Electrotactiloscope.
   I wheel controlling a stop motion.

   The wheel has a laser and a photoresistor, when the beam is cut, a signal
   is sent to a computer playing a video using mplayer/mpv.
   The signal is actually a fake keyboard request to press a dot '.' which
   is the instruction to play a frame and pause.

   This code is for Teensy or Leonardo, the Keyboard mode must be selected
   and the country of the keyboard must be specified correctly.
 */

bool oldVal = 0;
const int led = 13;

void setup() {
    Serial.begin(115200);
    pinMode(A9, INPUT_PULLUP);
    pinMode(led, OUTPUT);
}

void loop() {
    bool newVal = digitalRead(A9);

    // check for laser detection rising edge:
    if (oldVal == 0 && newVal == 1) {
        // send next frame instruction (mpv/mplayer):
        Keyboard.print('.');

        static int cpt = 0;
        Serial.println(cpt++);

        digitalWrite(led, !digitalRead(led));
        delay(1); // debounce
    }

    oldVal = newVal;
}

