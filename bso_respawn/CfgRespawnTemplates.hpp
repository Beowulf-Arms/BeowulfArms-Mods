
class CfgRespawnTemplates {
    class BSO_Respawn_System {
        displayName = "BSO Advanced Respawn System";
        onPlayerKilled = QFUNC(playerKilled);
        onPlayerRespawn = QFUNC(playerRespawn);
        respawnTypes[] = {3};
        isCall = 1; // so that MenuPosition scripts wont spawn until we are done
    };
};
