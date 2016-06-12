function CMD_Handler( event, player, msg )
	if (player:GetGMRank() >= 1) and string.sub(msg, 1, 1) == "#" then
		local chunk, errors = load(string.sub(msg, 2, msg:len()))

		if errors then
			print(errors)
			player:SendBroadcastMessage("[ERROR]: "..errors)
		else
			Player = player or nil
			Target = player:GetSelection() or nil
			xpcall(chunk, function(ok, errors) print(ok, errors) end)
		end

		return false
	end
end

RegisterPlayerEvent(18, CMD_Handler)
RegisterPlayerEvent(19, CMD_Handler)
RegisterPlayerEvent(20, CMD_Handler)
RegisterPlayerEvent(21, CMD_Handler)
RegisterPlayerEvent(22, CMD_Handler)
