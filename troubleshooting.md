## for using on Windows:

1. configurations for openocd
	- nrf52832 (*board/nordic_nrf52_dk.cfg*)  
		```
		source [find interface/jlink.cfg]
		transport select swd
		source [find target/nrf52.cfg]
		```
	- nrf51422 (*board/nordic_nrf51_dk.cfg*)  
		```
		source [find interface/jlink.cfg]
		transport select swd
		set WORKAREASIZE 0
		source [find target/nrf51.cfg]
		```
	- if error of flashing on nrf52, then adding below codes into */scripts/target/nrf52.cfg*, since openocd still not support flash driver for *nrf5* or *nrf52*:  
		```
		flash bank $_CHIPNAME.flash nrf51 0x00000000 0 1 1 $_TARGETNAME
		flash bank $_CHIPNAME.uicr nrf51 0x10001000 0 1 1 $_TARGETNAME
		```

2. environments
	- if error of compiled object-file not found on cywin, then using msys instead

3. usb driver
	- if error of "libusb_error_not_supported", then reinstalling [jlink](https://www.segger.com/downloads/jlink/#J-LinkSoftwareAndDocumentationPack) and using [zadig](https://zadig.akeo.ie) to replace driver from old one (eg. *BULK interface 2* or *CDC interface 0*) to *WinUSB*

