# ClearType Enable (ctenable)

Enables ClearType on VDI that have font smoothing disabled.

FYI: [Enable/disable ClearType in Windows7](https://stackoverflow.com/questions/5676768/enable-disable-cleartype-in-windows7) @ StackOverflow

## Usage

 * Set the `On connection to user session` trigger task to Task Scheduler.
 * For `Settings`, select `Connect from remote computer`.
 * ~~Since it is invalid after a while, we recommend `Repeat task every` setting.~~

## How To Build

Example of MinGW:

`gcc -Wall -O3 -mwindows -o ctenable ctenable.c`
