# Metal Gear Solid 3 Noesis Plugin


This is a plugin for [Noesis](https://richwhitehouse.com/index.php?content=inc_projects.php&showproject=91) which allows the user to view textured 3D Models and animations from the game Metal Gear Solid 3: Snake Eater.

I would like to thank [revel8n](https://github.com/revel8n) for showing me how the face indices in the game are read. This project uses Victor Suba's PS2 GS layout swizzling code, thanks to ForceObscureGaming for making me aware of this code. 

![picture](https://github.com/Jayveer/MGS-MDL-Noesis/blob/master/model.png?raw=true)

### Latest Changes
 - Added Normals
 - Fixed size if MDC1

### To Do
 - Find out indices winding order
 - Fix problems with some textures
 - Add colour buffer
 - Add other vertex definition flags
 - Reverse how the game determines the bone list
##  Usage.

Drag the dll file into the plugins folder of your Noesis folder, run noesis and find and locate the MDL file you wish to view. Textures will be applied if the associated Tri file can be found. It is best to use [Shagohod](https://github.com/Jayveer/Shagohod) to extract the files so they are in the correct folders and format.

There is only one option which when checked allows you to load Mtar animation files for the model if it has bones.

##### Prompt for Motion Archive
This option will allow you to choose an Mtar file after the model has loaded. This allows you to view animations provided the bones match.
