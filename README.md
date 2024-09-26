# LFS mounting fail unless already formatted

Ensure storage partition is erased, then flash this project,
which includes a automount of /lfs from storage_partition on boot.

MCU will lock up.

Comment out automount and re-flash to get.  Connect with serial console to get a shell and issue `fs mount littlefs /lfs`

Uncomment the automount flag, rebuild and flash the project again.  MCU boots sucessfully.

## sparkfun_pro_micro_rp2040 build command

```
west build -p always -b sparkfun_pro_micro_rp2040 app
```

## nice_nano_v2 build command

```
west build -p always -b nice_nano_v2 app -- -DBOARD_ROOT=$(pwd)
```
