Docker command to run exercise 1:


```
 docker run -it --name yplayer --env DISPLAY=${DISPLAY} --env XAUTHORITY=/root/.Xauthority --mount type=bind,source="${XAUTHORITY}",target=/root/.Xauthority --mount type=bind,source=/tmp/.X11-unix,target=/tmp/.X11-unix  --mount type=bind,source=${HOME}/my_projects/training/iCubShanghai/shared_files,target=/root/shared_files icubteamcode/superbuild:v2022.05.2_sources bash
```

```
apt update && apt install –y unzip
```

```
--mount type=bind,source=${HOME}/.config/yarp,target=/root/.config/yarp
```

yarp server with shared cofig file:
```
docker run --name yarpSrvContainer --mount type=bind,source=${HOME}/.config/yarp,target=/root/.config/yarp icubteamcode/superbuild:v2022.02.1_sources yarp server --write
```


Complete command (graph + yarp cfg)
Use yarpview command instead of bash

```
docker run -it --name yplayer --env DISPLAY=${DISPLAY} --env XAUTHORITY=/root/.Xauthority --mount type=bind,source="${XAUTHORITY}",target=/root/.Xauthority --mount type=bind,source=/tmp/.X11-unix,target=/tmp/.X11-unix --mount type=bind,source=${HOME}/.config/yarp,target=/root/.config/yarp --mount type=bind,source=${HOME}/my_projects/training/iCubShanghai/shared_files,target=/root/shared_files icubteamcode/superbuild:v2022.05.2_sources bash
```

Connection command;


docker run -it --name connect  --mount type=bind,source=${HOME}/.config/yarp,target=/root/.config/yarp  icubteamcode/superbuild:v2022.05.2_sources yarp connect /icub/camcalib/left/out /yarpview/img:i