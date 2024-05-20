module baseball {
    requires competition;
    exports baseball;
    provides gameapi.Game with baseball.Baseball;
            
}
