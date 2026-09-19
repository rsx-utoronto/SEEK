## Bluetooth Module Configuration Steps

* **Step 1:** Ensure the serial baud rate is set to **9600** and the Serial Monitor line ending is set to **No Line Ending**.
* **Step 2:** Run your sketch, type `AT` into the Serial Monitor, and wait for the response **`OK`**.
* **Step 3:** Type `AT+NAMESEEK_KIT#` (replace `#` with your team number) and wait for the response **`OKsetname`**.
* **Step 4:** Power cycle your Arduino and Bluetooth module (unplug and plug back in).
* **Step 5:** Connect via Bluetooth and verify that the device name has changed from `HC_06` to your new custom name.
