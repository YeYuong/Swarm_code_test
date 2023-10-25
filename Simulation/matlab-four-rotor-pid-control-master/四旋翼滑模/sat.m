function res = sat(x)
compare_val = 0.005;

if(x>compare_val)
    res = 1;
elseif(x<-compare_val)
    res = -1;
else
    res = x/compare_val;
end

end