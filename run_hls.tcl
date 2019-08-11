open_project -reset cosim
set_top histogram_forward
add_files hist_forward.cpp

add_files -tb test.cpp

open_solution -reset "cosim"
set_part {xc7k160tfbg484-2}

list_core

create_clock -period 10
csynth_design

export_design -rtl verilog

cosim_design -rtl verilog

exit
