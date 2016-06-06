--DEVKM
function reloadElunaEngine(event, player, command)
  if command == "reload scripts" or command == "km" then 
	if player == nil or player:IsGM() then -- console or gm
		ReloadEluna()
	else
		player:SendBroadcastMessage("Debes activar el modo <GM> para poder usar este comando")
	end
  end
end

RegisterPlayerEvent(42, reloadElunaEngine)