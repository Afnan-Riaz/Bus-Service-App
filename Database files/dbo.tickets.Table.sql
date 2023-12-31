USE [bus]
GO
/****** Object:  Table [dbo].[tickets]    Script Date: 6/21/2023 2:46:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[tickets](
	[ticketnum] [int] NULL,
	[passenger_name] [varchar](20) NOT NULL,
	[Booked_Seats] [varchar](40) NULL,
	[fare] [int] NULL,
	[class] [varchar](20) NULL,
	[provider] [varchar](20) NULL,
	[Bus_id] [varchar](20) NULL,
	[arrLoc] [varchar](20) NULL,
	[depLoc] [varchar](20) NULL
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[tickets] ADD  DEFAULT (NULL) FOR [passenger_name]
GO
