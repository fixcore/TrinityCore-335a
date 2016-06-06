local ZoneCheck = {
        AllowedZones = {
                [4] = true,
                [2037] = true,
                [3277] = true,
                [2597] = true,
                [3358] = true,
        },
        TeleportLocations = {
                -- [TeamId] = {Map, X, Y, Z, Orientation}
                [0] = {0, -10998, -3400, 62.5, 0},
                [1] = {0, -10900, -2700, 7.6, 0},
        },
        RestrictedMessage = "You have entered a restricted zone. You have been removed from the area."
}
 
function ZoneCheck.OnChange(event, player, newZone)
        if not player:IsGM() then
                if not(ZoneCheck.AllowedZones[newZone]) then
                        local map, x, y, z, o = table.unpack(ZoneCheck.TeleportLocations[player:GetTeam()])
                        player:Teleport(map, x, y, z, o)
                        player:SendAreaTriggerMessage(ZoneCheck.RestrictedMessage)
                end
        end
end
 
RegisterPlayerEvent(27, ZoneCheck.OnChange)