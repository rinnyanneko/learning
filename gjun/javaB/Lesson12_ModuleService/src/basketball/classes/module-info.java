
module basketball {
    requires competition;
    exports basketball;
    provides gameapi.Game with basketball.Basketball;
}
