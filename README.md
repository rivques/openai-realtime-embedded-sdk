# Smartwatch-realtime
A prototype of a smartwatch that uses the OpenAI Realtime SDK to talk to its user. Runs on an ESP32-S3.

Working features:
* Updating watchface that tells the time on 128x128 TFT
* Speak to GPT4o-mini thru I2S-powered speaker and mic (spotty - works better when not running display)

Planned features:
* OpenAI funciton calling for things like weather, home automation, sports scores, etc.
* Watchface displays transcript of speech
* Geolocation and time zone detection from nearby WiFi networks
* Condense prototype onto PCB/actual smartwatch
